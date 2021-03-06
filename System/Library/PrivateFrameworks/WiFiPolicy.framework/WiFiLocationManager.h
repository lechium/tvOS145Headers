/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WiFiLocationManagerDelegate, OS_dispatch_queue;
@class CLLocation, CLLocationManager, NSMutableArray, NSObject, NSString;

@interface WiFiLocationManager : NSObject <CLLocationManagerDelegate> {

	unsigned char _shouldMonitorVisits;
	unsigned char _isAuthorized;
	int _locationManagerState;
	id<WiFiLocationManagerDelegate> _delegate;
	CLLocation* _latestLocation;
	CLLocationManager* _clLocationManager;
	NSMutableArray* _clientsDataArray;
	NSMutableArray* _visitClientsDataArray;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CLLocationManager * clLocationManager;                        //@synthesize clLocationManager=_clLocationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientsDataArray;                            //@synthesize clientsDataArray=_clientsDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitClientsDataArray;                       //@synthesize visitClientsDataArray=_visitClientsDataArray - In the implementation block
@property (assign) int locationManagerState;                                               //@synthesize locationManagerState=_locationManagerState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) CLLocation * latestLocation;                                            //@synthesize latestLocation=_latestLocation - In the implementation block
@property (assign) unsigned char isAuthorized;                                             //@synthesize isAuthorized=_isAuthorized - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned char shouldMonitorVisits;                            //@synthesize shouldMonitorVisits=_shouldMonitorVisits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiLocationManager;
+(unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 isHighAccuracy:(unsigned char)arg3 ;
+(unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 requiredAccuracy:(double)arg3 ;
+(id)getStringOfCallbackType:(int)arg1 ;
+(id)getStringOfState:(int)arg1 ;
+(void)logLocation:(id)arg1 addPrefixString:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<WiFiLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<WiFiLocationManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(unsigned char)isAuthorized;
-(CLLocationManager *)clLocationManager;
-(void)setClLocationManager:(CLLocationManager *)arg1 ;
-(void)setShouldMonitorVisits:(unsigned char)arg1 ;
-(void)registerVisitCallbackFunctionPtr:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(CLLocation *)latestLocation;
-(void)requestLowAccuracyLocationUpdate;
-(void)setIsAuthorized:(unsigned char)arg1 ;
-(void)setLocationManagerState:(int)arg1 ;
-(void)setClientsDataArray:(NSMutableArray *)arg1 ;
-(void)setVisitClientsDataArray:(NSMutableArray *)arg1 ;
-(void)createCoreLocationObjects;
-(void)destroyCoreLocationObjects;
-(NSMutableArray *)clientsDataArray;
-(NSMutableArray *)visitClientsDataArray;
-(void)invokeClientsCallbackType:(int)arg1 withLocation:(id)arg2 withError:(id)arg3 ;
-(int)locationManagerState;
-(void)setCLLocationUpdateParams:(id)arg1 ;
-(void)requestLeechedAccuracyLocationUpdate;
-(void)locationRequestDidTimeOut;
-(void)setLatestLocation:(CLLocation *)arg1 ;
-(void)cancelLocationRequestTimeOut;
-(unsigned char)shouldMonitorVisits;
-(void)registerCallbackFunctionPtr:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)requestHighAccuracyLocationUpdate;
-(void)stopQueryingLocation;
@end

