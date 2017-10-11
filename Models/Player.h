//
//  Player.h
//  Ratings
//
//  Created by Israel Cerón on 09/10/17.
//  Copyright © 2017 NinjaBit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;


@end
