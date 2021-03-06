//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCPMADTaskProtocol-Protocol.h"

@class NSArray, NSURL;

@interface VCPRequestUpdateKeyFacesOfPersonsTask : NSObject <VCPMADTaskProtocol>
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSArray *_personLocalIdentifiers;	// 16 = 0x10
    _Bool _forceUpdate;	// 24 = 0x18
    NSURL *_photoLibraryURL;	// 32 = 0x20
    CDUnknownBlockType _progressHandler;	// 40 = 0x28
    CDUnknownBlockType _reply;	// 48 = 0x30
    CDUnknownBlockType _cancelBlock;	// 56 = 0x38
}

+ (id)taskWithLocalIdentifiers:(id)arg1 andForceUpdate:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100060d50
- (void).cxx_destruct;	// IMP=0x000000010006130c
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (int)run;	// IMP=0x000000010006107c
- (_Bool)isCanceled;	// IMP=0x0000000100061058
- (void)cancel;	// IMP=0x0000000100061048
- (float)resourceRequirement;	// IMP=0x000000010006103c
- (void)dealloc;	// IMP=0x0000000100060e40
- (id)initWithLocalIdentifiers:(id)arg1 andForceUpdate:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100060c44

@end

