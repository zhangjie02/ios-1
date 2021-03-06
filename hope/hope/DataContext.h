//
//  DataContext.h
//  XinJieKou
//
//  Created by Xiu on 12/5/12.
//  Copyright (c) 2012 MitianTech, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Util.h"



#if NS_BLOCKS_AVAILABLE

typedef void(^FetchSuccessBlock)(id items,BOOL finished);
typedef void(^FetchFailBlock)(NSError *error);

#endif

@interface DataContext : NSObject


+ (id)sharedInstance;

- (NSURL*)getUrl:(NSString*)path page:(int)page;

-(NSURL*)getUrl:(NSString*)path;


- (void)fetchURL:(NSURL*)urlPath
         success:(FetchSuccessBlock)success
         failure:(FetchFailBlock)failure;

- (void)fetchURL:(NSURL*)urlPath
         success:(FetchSuccessBlock)success
         failure:(FetchFailBlock)failure
            page:(NSUInteger)page;

- (BOOL) isConnectionAvailable;

@end
