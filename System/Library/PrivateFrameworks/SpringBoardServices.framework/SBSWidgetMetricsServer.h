/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSWidgetMetricsProviding.h>

@class BSServiceConnection, NSString;

@interface SBSWidgetMetricsServer : NSObject <SBSWidgetMetricsProviding> {

	BSServiceConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkOutServerInstance;
+(void)returnServerInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_createConnection;
@end

