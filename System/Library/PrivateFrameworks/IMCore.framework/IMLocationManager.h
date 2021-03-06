/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) BOOL preciseLocationAuthorized; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSError *)error;
-(CLLocation *)location;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 withAuthorizedHandler:(/*^block*/id)arg2 updateHandler:(/*^block*/id)arg3;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)startUpdatingCurrentLocationWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2;
-(BOOL)preciseLocationAuthorized;

@end


@class CLLocation, NSError, CLLocationManager, NSMutableArray, NSTimer, NSDate, CLInUseAssertion, NSString;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {

	CLLocationManager* _locationManager;
	NSMutableArray* _handlers;
	NSTimer* _timeoutHandler;
	CLLocation* _location;
	NSError* _error;
	NSDate* _locateStartTime;
	NSTimer* _locationUpdateTimer;
	BOOL _inRequestPreciseLocation;
	BOOL _firstAuthorizationCallbackArrived;
	CLInUseAssertion* _inUseAssertion;

}

@property (nonatomic,retain) CLLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                       //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                 //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                           //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                            //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (assign,nonatomic) BOOL inRequestPreciseLocation;                       //@synthesize inRequestPreciseLocation=_inRequestPreciseLocation - In the implementation block
@property (assign,nonatomic) BOOL firstAuthorizationCallbackArrived;              //@synthesize firstAuthorizationCallbackArrived=_firstAuthorizationCallbackArrived - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                   //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL locationAuthorizationDetermined; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) BOOL preciseLocationAuthorized; 
+(id)sharedInstance;
+(id)locationShifter;
+(Class)__CLLocationManagerClass;
+(Class)__CLInUseAssertionClass;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)handlers;
-(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 withAuthorizedHandler:(/*^block*/id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)locationAuthorizationDetermined;
-(BOOL)locationAuthorizationDenied;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(BOOL)firstAuthorizationCallbackArrived;
-(BOOL)inRequestPreciseLocation;
-(void)setInRequestPreciseLocation:(BOOL)arg1 ;
-(void)_startLocationUpdateTimerWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)_errorHappend:(id)arg1 ;
-(void)_fireCompletionHandlers;
-(void)setFirstAuthorizationCallbackArrived:(BOOL)arg1 ;
-(void)startUpdatingCurrentLocationWithAuthorizedHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)_locationManagerTimedOut;
-(NSDate *)locateStartTime;
-(BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2 ;
-(CLInUseAssertion *)inUseAssertion;
-(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)preciseLocationAuthorized;
@end

