/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@protocol OS_dispatch_queue;
@class geo_isolater, NSObject;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;
	geo_isolater* _mapViewIso;
	NSObject*<OS_dispatch_queue> _configQueue;

}
+(id)sharedData;
-(id)init;
-(void)setMetroRegion:(id)arg1 ;
-(void)setUserHomemetro:(id)arg1 ;
-(void)setUserHomecountry:(id)arg1 ;
-(void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(BOOL)_isHandoff;
-(BOOL)_isHandoffFromDeviceType:(id)arg1 ;
-(BOOL)isIPadHandoff;
-(BOOL)isWatchHandoff;
-(void)performMapViewStateUpdate:(/*^block*/id)arg1 ;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(void)clearPlaceCardStateData;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)hasPlaceCardStateData;
-(BOOL)hasMapsServerData;
-(BOOL)hasSuggestionsData;
-(void)clearSuggestionsData;
-(BOOL)hasMapRestoreData;
-(BOOL)hasMapLaunchData;
-(int)navVoiceVolumeAsGEONavVoiceVolume;
-(int)transportModeAsGEOTransportMode;
-(int)activeNavModeAsGEOTransportType;
-(int)locationPrecisionTypeAsGEOSettingsLocationType;
-(int)layoutInfoAsGEOLayoutInfo;
-(int)layoutStyleAsGEOLayoutStyle;
-(BOOL)isIPhoneHandoff;
-(BOOL)isMacHandoff;
@end
