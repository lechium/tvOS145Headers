/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface MLModelCollectionEntry : NSObject {

	NSString* _modelIdentifier;
	NSURL* _modelURL;

}

@property (nonatomic,readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                        //@synthesize modelURL=_modelURL - In the implementation block
+(id)entryWithModelIdentifier:(id)arg1 modelURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)modelIdentifier;
-(NSURL *)modelURL;
-(BOOL)isEqualToModelCollectionEntry:(id)arg1 ;
-(id)_initWithModelIdentifier:(id)arg1 modelUrl:(id)arg2 ;
@end

