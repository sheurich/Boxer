/* 
 Boxer is copyright 2011 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/BoxerHelp/pages/legalese.html, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


//BXJoysticks extends BXInputController with delegate methods for handling HID joystick input
//from BXJoystickController. These are translated into emulated joystick responses and passed
//to BXInputHandler.

#import "BXInputController.h"
#import "BXHIDEvent.h"

@interface BXInputController (BXJoystickInput) <BXHIDDeviceDelegate>

@end