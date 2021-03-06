/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAccessResource.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _makeAvailableCompletionHandler;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,copy) id makeAvailableCompletionHandler;                  //@synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemResource;
-(id)name;
-(id)icon;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(void)finishMakingAvailableWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)makeAvailableCompletionHandler;
-(void)setMakeAvailableCompletionHandler:(id)arg1 ;
@end

