//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHAudioTap : NSObject
{
    _Bool _isClosed;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    long long _recordingSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100010088
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(readonly, nonatomic) long long recordingSource; // @synthesize recordingSource=_recordingSource;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)close;	// IMP=0x0000000100010058
- (id)initWithRecordingSource:(long long)arg1;	// IMP=0x0000000100010010

@end
