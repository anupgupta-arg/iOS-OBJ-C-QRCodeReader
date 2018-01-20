//
//  ViewController.h
//  QRCodeReader
//
//  Created by Uniqolabel Developer on 19/01/18.
//  Copyright © 2018 geekGuns. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;

- (IBAction)startAndStopButtonACtion:(id)sender;

@end

