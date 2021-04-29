/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntityCollection.h>

@class NSString, TVHKMediaEntityType, TVHKMediaEntityIdentifier;

@interface TVHKDAAPGroupsMediaEntityCollection : TVHKMediaEntityCollection {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	TVHKMediaEntityIdentifier* _artistIdentifier;

}
-(id)type;
-(id)artistIdentifier;
-(id)imageIdentifier;
-(id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5 ;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
@end
