/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {

	AVRouteDetectorInternal* _routeDetectorInternal;

}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; 
@property (readonly) BOOL multipleRoutesDetected; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(BOOL)multipleRoutesDetected;
-(void)_updateMultipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
@end

