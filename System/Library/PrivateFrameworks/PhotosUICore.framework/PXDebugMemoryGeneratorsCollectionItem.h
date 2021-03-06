/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject {

	NSString* _name;
	NSString* _description;
	NSDictionary* _options;
	PHMemory* _memory;
	NSString* _rejectionCause;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSString * description;                 //@synthesize description=_description - In the implementation block
@property (readonly) NSDictionary * options;                 //@synthesize options=_options - In the implementation block
@property (readonly) PHMemory * memory;                      //@synthesize memory=_memory - In the implementation block
@property (readonly) NSString * rejectionCause;              //@synthesize rejectionCause=_rejectionCause - In the implementation block
-(NSString *)name;
-(NSString *)description;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(PHMemory *)memory;
-(NSString *)rejectionCause;
-(id)initWithMemory:(id)arg1 memoryInfo:(id)arg2 ;
@end

