//
//  DetailViewController.h
//  wqe
//
//  Created by MK on 20.01.13.
//  Copyright (c) 2013 MK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
