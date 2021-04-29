/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>
#import <libobjc.A.dylib/GEONavigationListenerDelegate.h>

@protocol OS_dispatch_semaphore;
@class GEONavigationListener, NSString, NSObject;

@interface PPQuickTypeNavigationServant : NSObject <PPQuickTypeServantProtocol, GEONavigationListenerDelegate> {

	GEONavigationListener* _navigationListener;
	int _navigationState;
	NSString* _destinationName;
	NSString* _streetName;
	double _remainingTimeToDestination;
	double _remainingDistanceToDestination;
	NSObject*<OS_dispatch_semaphore> _stateSemaphore;
	NSObject*<OS_dispatch_semaphore> _streetSemaphore;
	NSObject*<OS_dispatch_semaphore> _summarySemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(SCD_Struct_PP27)arg2 ;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)_warmUpFormatters;
-(void)_initializeNavigationListener;
-(BOOL)_waitForState;
-(BOOL)_waitForStreet;
-(BOOL)_waitForSummary;
-(void)_stopListeningToNavigationUpdate;
-(void)_makeNavRequests;
@end
