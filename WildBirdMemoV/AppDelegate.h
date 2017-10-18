//
//  AppDelegate.h
//  WildBirdMemoV
//
//  Created by 田中 悟史 on 2017/10/18.
//  Copyright © 2017年 Satoshi TANAKA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

