//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class NSArray, NSURL;

@interface VCPRequestRebuildPersonsTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSArray *_personLocalIdentifiers;	// 16 = 0x10
    NSURL *_photoLibraryURL;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    CDUnknownBlockType _reply;	// 40 = 0x28
    CDUnknownBlockType _cancelBlock;	// 48 = 0x30
}

+ (id)taskWithLocalIdentifiers:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064424
- (void).cxx_destruct;	// IMP=0x0000000100064a58
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;	// IMP=0x0000000100064744
- (_Bool)isCanceled;	// IMP=0x0000000100064720
- (void)cancel;	// IMP=0x0000000100064710
- (float)resourceRequirement;	// IMP=0x0000000100064708
- (void)dealloc;	// IMP=0x000000010006450c
- (id)initWithLocalIdentifiers:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064328

@end

