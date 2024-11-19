BEGIN {
   IGNORECASE=1
   capture = 0
   RED = "\033[31m"
   YELLOW = "\033[33m"
   RESET = "\033[0m"
}

/Executing SLANG frontend/ {
   # Start capturing when we find "Executing SLANG frontend"
   capture = 1
   gsub(/\<Warning[s]*\>/, YELLOW "Warning" RESET)
   gsub(/\<Error[s]*\>/, RED "Error" RESET)
   print
   next
}

capture {
   gsub(/\<Warning[s]*\>/, YELLOW "Warning" RESET)
   gsub(/\<Error[s]*\>/, RED "Error" RESET)
   print
   if ($0 ~ /Executing/ && $0 !~ /SLANG frontend/) {
      capture = 0
   }
}

/Executing/ {
   if ($0 ~ /[0-9\.]+ Executing/) {
      gsub(/\<Warning[s]*\>/, YELLOW "Warning" RESET)
      gsub(/\<Error[s]*\>/, RED "Error" RESET)
      print
   }
}

/\<Warning[s]*\>|\<Error[s]*\>/ {
    gsub(/\<Warning\>/, YELLOW "Warning" RESET)
    gsub(/\<Error\>/, RED "Error" RESET)
    print
}