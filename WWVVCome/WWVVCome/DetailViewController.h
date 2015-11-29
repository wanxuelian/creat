//
//  DetailViewController.h
//  WWVVCome
//
//  Created by Mac on 15/11/29.
//  Copyright © 2015年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

