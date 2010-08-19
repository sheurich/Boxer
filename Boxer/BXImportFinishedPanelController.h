/* 
 Boxer is copyright 2010 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/GNU General Public License.txt, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */


//BXImportFinishedPanelController controls the appearance and behaviour of the final
//your-gamebox-is-finished panel of the import process.

#import <Cocoa/Cocoa.h>

@class BXImportWindowController;
@interface BXImportFinishedPanelController : NSViewController
{
	IBOutlet BXImportWindowController *controller;
	IBOutlet NSImageView *iconView;
}

//A reference to our window controller.
@property (assign, nonatomic) BXImportWindowController *controller;

//The image well that displays the gamebox icon.
@property (retain, nonatomic) NSImageView *iconView;

//The gamebox’s icon itself.
@property (retain, nonatomic) NSImage *gameboxIcon;

//Reveal the newly-minted gamebox in Finder.
- (IBAction) revealGamebox: (id)sender;

//Launch the newly-minted gamebox in a new Boxer process.
- (IBAction) launchGamebox: (id)sender;

//Called when the user drops an image onto the icon view.
- (IBAction) addCoverArt: (id)sender;
@end