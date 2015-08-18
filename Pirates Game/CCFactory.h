//
//  CCFactory.h
//  Pirates Game
//
//  Created by Coceseeds on 17/08/15.
//  Copyright (c) 2015 Coceseeds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCharacter.h"
#import "CCBoss.h"

@interface CCFactory : NSObject

-(NSArray *) tiles;
-(CCCharacter *) character;
-(CCBoss *)boss;

@end
