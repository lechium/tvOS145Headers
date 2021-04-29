/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VUINowPlayingConfig : NSObject {

	BOOL _showsLozengeForLivePlayback;
	BOOL _showsStillWatchingAlert;
	BOOL _allowQOSReportingForiTunesLibraryPlayback;
	BOOL _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
	double _stillWatchingAlertDuration;
	double _alertIdleTimeout;
	NSArray* _mediaTypesExcludedFromReporting;

}

@property (assign,nonatomic) BOOL showsLozengeForLivePlayback;                                                     //@synthesize showsLozengeForLivePlayback=_showsLozengeForLivePlayback - In the implementation block
@property (assign,nonatomic) BOOL showsStillWatchingAlert;                                                         //@synthesize showsStillWatchingAlert=_showsStillWatchingAlert - In the implementation block
@property (assign,nonatomic) double stillWatchingAlertDuration;                                                    //@synthesize stillWatchingAlertDuration=_stillWatchingAlertDuration - In the implementation block
@property (assign,nonatomic) double alertIdleTimeout;                                                              //@synthesize alertIdleTimeout=_alertIdleTimeout - In the implementation block
@property (nonatomic,copy) NSArray * mediaTypesExcludedFromReporting;                                              //@synthesize mediaTypesExcludedFromReporting=_mediaTypesExcludedFromReporting - In the implementation block
@property (assign,nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;                                       //@synthesize allowQOSReportingForiTunesLibraryPlayback=_allowQOSReportingForiTunesLibraryPlayback - In the implementation block
@property (assign,nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;              //@synthesize convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero=_convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero - In the implementation block
-(id)init;
-(BOOL)convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
-(double)alertIdleTimeout;
-(BOOL)showsLozengeForLivePlayback;
-(void)setShowsLozengeForLivePlayback:(BOOL)arg1 ;
-(BOOL)showsStillWatchingAlert;
-(void)setShowsStillWatchingAlert:(BOOL)arg1 ;
-(double)stillWatchingAlertDuration;
-(void)setStillWatchingAlertDuration:(double)arg1 ;
-(void)setAlertIdleTimeout:(double)arg1 ;
-(NSArray *)mediaTypesExcludedFromReporting;
-(void)setMediaTypesExcludedFromReporting:(NSArray *)arg1 ;
-(BOOL)allowQOSReportingForiTunesLibraryPlayback;
-(void)setAllowQOSReportingForiTunesLibraryPlayback:(BOOL)arg1 ;
-(void)setConvertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero:(BOOL)arg1 ;
@end

