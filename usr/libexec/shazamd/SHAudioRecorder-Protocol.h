//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SHAudioRecorderDelegate;

@protocol SHAudioRecorder <NSObject>
+ (id)new;
@property(readonly, nonatomic) long long recognitionSource;
@property(nonatomic) __weak id <SHAudioRecorderDelegate> delegate;
- (id)init;
- (_Bool)stopRecordingWithError:(id *)arg1;
- (void)startRecordingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (id)initWithSource:(long long)arg1;
@end
