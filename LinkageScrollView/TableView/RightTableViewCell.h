//
//  RightTableViewCell.h
//  LinkageScrollView
//
//  Created by 刘豪亮 on 16/8/22.
//  Copyright © 2016年 MrUncle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoodModel;

#define kCellIdentifier_Right @"RightTableViewCell"

@interface RightTableViewCell : UITableViewCell

@property (nonatomic, strong) FoodModel *model;

@end
