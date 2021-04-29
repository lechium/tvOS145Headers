/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEONavdPeer.h>
#import <libobjc.A.dylib/GEONavigationServerRequestStateXPCInterface.h>

@class GEONavigationServer, NSString;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface> {

	GEONavigationServer* _delegate;

}

@property (assign,nonatomic,__weak) GEONavigationServer * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(GEONavigationServer *)delegate;
-(void)setDelegate:(GEONavigationServer *)arg1 ;
-(void)requestRouteSummary;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)requestActiveRouteDetailsData;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestRideSelections;
-(void)requestPositionFromSign;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestNavigationVoiceVolume;
-(void)requestUpdates;
@end
