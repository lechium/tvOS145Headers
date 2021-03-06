//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VideoTranscodingTask.h"

@class AVAssetExportSession;

__attribute__((visibility("hidden")))
@interface ExportSessionVideoTranscodingTask : VideoTranscodingTask
{
    AVAssetExportSession *_exportSession;	// 144 = 0x90
}

+ (id)videoDateFormatter;	// IMP=0x0000000100018158
- (void).cxx_destruct;	// IMP=0x000000010001af34
@property(retain) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (void)dumpStatistics;	// IMP=0x000000010001aca4
- (id)outputFileTypeForExportSession:(id)arg1;	// IMP=0x000000010001aa74
- (_Bool)hasTimeScaleTimeRange;	// IMP=0x000000010001aa10
- (CDStruct_3c1748cc)timeScaleTimeRange;	// IMP=0x000000010001a97c
- (_Bool)hasTimeScaleMultiplier;	// IMP=0x000000010001a918
- (double)timeScaleMultiplier;	// IMP=0x000000010001a898
- (id)exportPresetName;	// IMP=0x000000010001a824
- (id)metadataItemsFromOptionsAndInputAsset:(id)arg1;	// IMP=0x0000000100019e14
- (void)addOutputMetadataFromOptionsAndInputAsset:(id)arg1 toExportSession:(id)arg2;	// IMP=0x0000000100019d04
- (id)exportSessionForInputAsset:(id)arg1 presetName:(id)arg2;	// IMP=0x0000000100019ad0
- (void)performMetadataTrackExtractionConversion;	// IMP=0x00000001000193f4
- (void)performPassthroughConversion;	// IMP=0x00000001000192e8
- (void)cancelTranscode;	// IMP=0x00000001000191b0
- (double)currentFractionCompleted;	// IMP=0x000000010001905c
- (_Bool)hasProgress;	// IMP=0x0000000100019020
- (CDUnknownBlockType)exportSessionCompletionHandler;	// IMP=0x0000000100018fd0
- (void)startExportSession:(id)arg1;	// IMP=0x0000000100018f3c
- (void)configureOutputForExportSession:(id)arg1 outputFileType:(id)arg2;	// IMP=0x0000000100018eb8
- (void)performExport;	// IMP=0x00000001000181e0

@end

