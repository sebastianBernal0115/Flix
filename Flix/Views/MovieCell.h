//
//  MovieCell.h
//  Flix
//
//  Created by sbernal0115 on 6/26/19.
//  Copyright © 2019 sbernal0115. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterLabel;

@end

NS_ASSUME_NONNULL_END
