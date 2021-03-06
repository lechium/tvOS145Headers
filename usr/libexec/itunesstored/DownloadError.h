//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface DownloadError : NSObject <NSCopying>
{
    NSMutableOrderedSet *_downloadIdentifiers;	// 8 = 0x8
    NSString *_downloadKind;	// 16 = 0x10
    NSString *_downloadTitle;	// 24 = 0x18
    id _notification;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *downloadTitle; // @synthesize downloadTitle=_downloadTitle;
@property(copy, nonatomic) NSString *downloadKind; // @synthesize downloadKind=_downloadKind;
@property(retain, nonatomic, getter=_notification, setter=_setNotification:) id _notification; // @synthesize _notification;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100116de4
- (_Bool)representsDownloadWithIdentifier:(long long)arg1;	// IMP=0x0000000100116d80
- (void)removeDownloadIdentifier:(long long)arg1;	// IMP=0x0000000100116d28
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x0000000100116d24
@property(readonly, nonatomic, getter=isValidError) _Bool validError;
@property(readonly, nonatomic) NSOrderedSet *downloadIdentifiers;
- (id)copyUserNotification;	// IMP=0x0000000100116cf4
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x0000000100116cec
- (void)addDownloadIdentifiers:(id)arg1;	// IMP=0x0000000100116ca8
- (void)addDownloadIdentifier:(long long)arg1;	// IMP=0x0000000100116c38
- (void)dealloc;	// IMP=0x0000000100116bd8

@end

