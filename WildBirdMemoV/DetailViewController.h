//
//  DetailViewController.h
//  WildBirdMemoV
//
//  Created by 田中 悟史 on 2017/10/18.
//  Copyright © 2017年 Satoshi TANAKA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WildBirdMemoV+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

