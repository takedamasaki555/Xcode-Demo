//
//  DetailViewController.h
//  Xcode-VSTS-demo
//
//  Created by WebMatrixMan on 2016/12/13.
//  Copyright © 2016年 WebMatrixMan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

