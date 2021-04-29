//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CKRecordID, NSString;

@interface CPLCloudKitStreamingKey : NSObject <NSCopying>
{
    CKRecordID *_recordID;	// 8 = 0x8
    NSString *_resourceKey;	// 16 = 0x10
    NSString *_fingerPrint;	// 24 = 0x18
    NSString *_filename;	// 32 = 0x20
    NSString *_groupName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000d1398
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(readonly, nonatomic) NSString *resourceKey; // @synthesize resourceKey=_resourceKey;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000d1250
- (unsigned long long)hash;	// IMP=0x00000001000d1240
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d123c
- (id)initWithRecordID:(id)arg1 resourceKey:(id)arg2 fingerPrint:(id)arg3 filename:(id)arg4 groupName:(id)arg5;	// IMP=0x00000001000d10d0

@end

