//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP19appstorecomponentsdP33_D80719089AEE5E5216E004FAC148D7CA18JSLocObjectExports_-Protocol.h"

@class MISSING_TYPE, NSString;

@interface _TtC19appstorecomponentsd11JSLocObject : NSObject <_TtP19appstorecomponentsdP33_D80719089AEE5E5216E004FAC148D7CA18JSLocObjectExports_>
{
    MISSING_TYPE *localizer;	// 0 = 0x0
    MISSING_TYPE *locale;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendar;	// 0 = 0x0
    MISSING_TYPE *localeWithCalendarWithBagFixUp;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100083418
- (id)init;	// IMP=0x00000001000833b8
- (id)relativeDate:(id)arg1;	// IMP=0x0000000100083274
- (id)formatDateInSentence:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000001000829d0
- (id)formatDate:(id)arg1:(id)arg2;	// IMP=0x00000001000825a4
- (id)timeAgo:(id)arg1;	// IMP=0x0000000100082598
- (id)formattedCount:(id)arg1;	// IMP=0x0000000100081d9c
- (id)fileSize:(id)arg1;	// IMP=0x0000000100081be0
- (id)decimal:(id)arg1:(long long)arg2;	// IMP=0x0000000100081b44
- (id)stringWithCounts:(id)arg1:(id)arg2;	// IMP=0x0000000100081880
- (id)stringWithCount:(id)arg1:(long long)arg2;	// IMP=0x0000000100081590
- (id)string:(id)arg1;	// IMP=0x00000001000814e4
@property(nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property(nonatomic, readonly) NSString *identifier;

@end
