//
//  MDRouterWebsiteAdapter.h
//  MDRouter
//
//  Created by Jave on 2017/12/15.
//  Copyright © 2017年 markejave. All rights reserved.
//

#import "MDRouterAdapter.h"

@interface MDRouterWebsiteAdapter : MDRouterAdapter

+ (instancetype)adapterWithBaseURL:(NSURL *)baseURL NS_UNAVAILABLE;

- (instancetype)initWithBaseURL:(NSURL *)baseURL NS_UNAVAILABLE;

+ (instancetype)adapterWithBlock:(id (^)(NSDictionary *arguments, NSError **error))block;
- (instancetype)initWithBlock:(id (^)(NSDictionary *arguments, NSError **error))block;

@end