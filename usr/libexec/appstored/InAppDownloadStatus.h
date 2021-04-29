//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString;

@interface InAppDownloadStatus : NSObject
{
    NSNumber *_downloadID;	// 8 = 0x8
    double _progress;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    double _timeRemaining;	// 32 = 0x20
    NSString *_installPath;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100276ff8
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *installPath; // @synthesize installPath=_installPath;
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
- (id)initWithDownloadID:(id)arg1;	// IMP=0x0000000100276ef0

@end

