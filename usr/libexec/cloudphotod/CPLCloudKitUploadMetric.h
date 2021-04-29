//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitMetric.h"

@interface CPLCloudKitUploadMetric : CPLCloudKitMetric
{
    unsigned long long _itemCount;	// 72 = 0x48
    unsigned long long _uploadSize;	// 80 = 0x50
    unsigned long long _referencedResourcesCount;	// 88 = 0x58
    unsigned long long _referencedResourcesSize;	// 96 = 0x60
    unsigned long long _otherItemCount;	// 104 = 0x68
    unsigned long long _uploadedSize;	// 112 = 0x70
}

@property(nonatomic) unsigned long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) unsigned long long otherItemCount; // @synthesize otherItemCount=_otherItemCount;
@property(nonatomic) unsigned long long referencedResourcesSize; // @synthesize referencedResourcesSize=_referencedResourcesSize;
@property(nonatomic) unsigned long long referencedResourcesCount; // @synthesize referencedResourcesCount=_referencedResourcesCount;
@property(nonatomic) unsigned long long uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
- (id)description;	// IMP=0x00000001000dc2ec
- (void)prepareCKEventMetric:(id)arg1;	// IMP=0x00000001000dc0ec
- (id)init;	// IMP=0x00000001000dc0b0

@end
