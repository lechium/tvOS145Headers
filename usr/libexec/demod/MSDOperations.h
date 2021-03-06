//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class MSDHelperAgent, MSDManifest, MSDTargetDevice, NSError, NSMutableArray, NSString;

@interface MSDOperations : NSObject <NSURLConnectionDelegate>
{
    MSDManifest *_masterManifest;	// 8 = 0x8
    NSString *_stagingRootPath;	// 16 = 0x10
    NSString *_contentRootPath;	// 24 = 0x18
    NSString *_section;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    long long _total;	// 48 = 0x30
    long long _finished;	// 56 = 0x38
    long long _reportedPercent;	// 64 = 0x40
    NSString *_containerType;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    MSDTargetDevice *_device;	// 88 = 0x58
    MSDHelperAgent *_helperAgent;	// 96 = 0x60
    NSMutableArray *_alreadyHaveList;	// 104 = 0x68
    NSMutableArray *_creationList;	// 112 = 0x70
    id _delegate;	// 120 = 0x78
    struct _NSRange _contentBeingInstalled;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010002eea4
@property long long reportedPercent; // @synthesize reportedPercent=_reportedPercent;
@property long long finished; // @synthesize finished=_finished;
@property long long total; // @synthesize total=_total;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *creationList; // @synthesize creationList=_creationList;
@property(retain) NSMutableArray *alreadyHaveList; // @synthesize alreadyHaveList=_alreadyHaveList;
@property struct _NSRange contentBeingInstalled; // @synthesize contentBeingInstalled=_contentBeingInstalled;
@property(retain, nonatomic) MSDHelperAgent *helperAgent; // @synthesize helperAgent=_helperAgent;
@property(retain, nonatomic) MSDTargetDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain) NSString *section; // @synthesize section=_section;
@property(retain) NSString *stagingRootPath; // @synthesize stagingRootPath=_stagingRootPath;
- (_Bool)checkHashAndEntitlementForFile:(id)arg1 inStagingPath:(id)arg2;	// IMP=0x000000010002e958
- (_Bool)restoreAllAttributesFromManifest;	// IMP=0x000000010002e824
- (_Bool)processAlreadyHaveList:(id)arg1;	// IMP=0x000000010002deac
- (_Bool)downloadAndVerifyFile:(id)arg1 to:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010002d9b4
- (_Bool)downloadCreationList:(id)arg1;	// IMP=0x000000010002cf94
- (_Bool)processCreationList:(id)arg1;	// IMP=0x000000010002bc80
- (_Bool)verify;	// IMP=0x000000010002b4e0
- (_Bool)process:(id *)arg1;	// IMP=0x000000010002b070
- (id)initWithMasterManifest:(id)arg1 andDeviceManifest:(id)arg2 forSection:(id)arg3;	// IMP=0x000000010002a97c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

