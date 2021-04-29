/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem {

	NSDictionary* _serializedItem;

}

@property (nonatomic,copy) NSDictionary * serializedItem;              //@synthesize serializedItem=_serializedItem - In the implementation block
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
-(id)name;
-(id)preferredFileType;
-(id)initWithSerializedItem:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 ;
-(id)metadataForSerialization;
-(NSDictionary *)serializedItem;
-(void)setSerializedItem:(NSDictionary *)arg1 ;
@end
