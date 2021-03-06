//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDMapsBrandAndMerchantUpdaterConfiguration : NSObject
{
    int _resultProviderID;	// 8 = 0x8
    long long _muid;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(nonatomic) long long muid; // @synthesize muid=_muid;
- (id)description;	// IMP=0x00000001000058d8
- (unsigned long long)hash;	// IMP=0x00000001000058c0
- (_Bool)isEqualToConfiguration:(id)arg1;	// IMP=0x00000001000058a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005820
- (id)initWithMUID:(long long)arg1 resultProviderID:(int)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;	// IMP=0x00000001000057b8

@end

