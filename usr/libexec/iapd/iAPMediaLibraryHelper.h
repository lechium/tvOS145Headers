//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MediaLibraryHelper, NSArray;
@protocol OS_dispatch_queue;

@interface iAPMediaLibraryHelper : NSObject
{
    unsigned int _stationCount;	// 8 = 0x8
    _Bool _stationGetError;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_libraryUpdateQ;	// 16 = 0x10
    NSArray *_stationsGroupList;	// 24 = 0x18
    MediaLibraryHelper *_mediaLibraryHelper;	// 32 = 0x20
}

@property(readonly, nonatomic) MediaLibraryHelper *mediaLibraryHelper; // @synthesize mediaLibraryHelper=_mediaLibraryHelper;
@property(readonly, nonatomic) _Bool stationGetError; // @synthesize stationGetError=_stationGetError;
@property(readonly, nonatomic) NSArray *stationsGroupList; // @synthesize stationsGroupList=_stationsGroupList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *libraryUpdateQ; // @synthesize libraryUpdateQ=_libraryUpdateQ;
- (_Bool)showAudioBooks;	// IMP=0x000000010003428c
- (_Bool)showITunesU;	// IMP=0x000000010003426c
- (_Bool)showPodcasts;	// IMP=0x000000010003424c
- (_Bool)showMusic;	// IMP=0x000000010003422c
- (void)handlMediaLibraryNeedFilterChange:(id)arg1;	// IMP=0x0000000100034154
- (id)stationNameForIndex:(unsigned long long)arg1;	// IMP=0x0000000100033f88
- (id)stationForIndex:(unsigned long long)arg1;	// IMP=0x0000000100033e3c
- (void)iterateStationsList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033bb0
- (void)_radioLibraryChanged:(id)arg1;	// IMP=0x0000000100033b14
- (_Bool)_updateRadioLibraryList;	// IMP=0x0000000100033524
@property(readonly, nonatomic) unsigned int stationCount;
- (void)dealloc;	// IMP=0x000000010003341c
- (id)init;	// IMP=0x00000001000332d4

@end

