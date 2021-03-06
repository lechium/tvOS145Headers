/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSOrderedSet;

@interface ICContentMapping : NSObject {

	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;                      //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * sourceType; 
@property (nonatomic,readonly) NSString * sourceKey; 
@property (nonatomic,readonly) NSString * destinationType; 
@property (nonatomic,readonly) NSString * destinationKey; 
@property (nonatomic,readonly) NSDictionary * valueMapping; 
@property (nonatomic,readonly) BOOL skipURLEncoding; 
@property (nonatomic,readonly) NSDictionary * parameterUI; 
@property (nonatomic,readonly) id parameterDefault; 
@property (nonatomic,readonly) BOOL supportsMultipleItems; 
@property (nonatomic,readonly) BOOL inputRequired; 
@property (nonatomic,readonly) NSOrderedSet * contentItemClasses; 
-(NSDictionary *)definition;
-(NSString *)sourceType;
-(NSString *)destinationType;
-(BOOL)supportsMultipleItems;
-(id)initWithDefinition:(id)arg1 ;
-(NSOrderedSet *)contentItemClasses;
-(void)getStringRepresentation:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
-(BOOL)inputRequired;
-(BOOL)skipURLEncoding;
-(NSString *)sourceKey;
-(NSString *)destinationKey;
-(NSDictionary *)valueMapping;
-(NSDictionary *)parameterUI;
-(id)parameterDefault;
-(void)getContentCollection:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
@end

