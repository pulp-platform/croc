#################
#    IO Site    #
#################

...

#################
# Pad Placement #
#################

set padW ... ;
set padD ... ;

set chipH ... ;
set chipW ... ;

set numPadsLeft ...
set offsetLeft 20
set pitchLeft [expr {floor( ($chipH - 2*$padD -2*$offsetLeft - $padW)/($numPadsLeft-1) )}]
set startLeft [expr $chipH - $padD - $offsetLeft - $padW]

set numPadsBottom ...
set offsetBottom 20
set pitchBottom [expr {floor( ($chipW - 2*$padD -2*$offsetBottom - $padW)/($numPadsBottom-1) )}]
set startBottom [expr $padD + $offsetBottom]

set numPadsRight ...
set offsetRight 20
set pitchRight [expr {floor( ($chipH - 2*$padD -2*$offsetRight - $padW)/($numPadsRight-1) )}]
set startRight [expr $padD + $offsetRight]

set numPadsTop ...
set offsetTop 20
set pitchTop [expr {floor( ($chipW - 2*$padD -2*$offsetTop - $padW)/($numPadsTop-1) )}]
set startTop [expr $chipW - $padD - $padW -$offsetTop]

# Edge: LEFT (top to bottom)
place_pad -row IO_WEST -location [expr $startLeft - 0*$pitchLeft] "..."  ; # pin no: 1
place_pad -row IO_WEST -location [expr $startLeft - 1*$pitchLeft] "..."  ; # pin no: 2
...

# Edge: BOTTOM (left to right)
place_pad -row IO_SOUTH -location [expr $startBottom + 0*$pitchBottom] "..."  ; # pin no: 1
...

# Edge: RIGHT (bottom to top)
place_pad -row IO_EAST -location [expr $startRight + 0*$pitchRight] "..."  ; # pin no: 1
...

# Edge: TOP (right to left)
place_pad -row IO_NORTH -location [expr $startTop - 0*$pitchTop] "..."  ; # pin no: 1
...


#################
# Corner Cells  #
#################

...

#################
# Filler Cells  #
#################

...

#################
# Ring Signals  #
#################

...

##################
#  Bonding Pads  #
##################

...

##################
# Remove IO rows #
##################

...