/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSAttributedString, MAAsset;

@interface _UIDefinitionValue : NSObject {

	NSString* _localizedDictionaryName;
	NSString* _term;
	NSAttributedString* _definition;
	NSString* _longDefinition;
	MAAsset* _rawAsset;

}

@property (readonly) NSString * localizedDictionaryName;              //@synthesize localizedDictionaryName=_localizedDictionaryName - In the implementation block
@property (readonly) NSString * term;                                 //@synthesize term=_term - In the implementation block
@property (readonly) NSAttributedString * definition;                 //@synthesize definition=_definition - In the implementation block
@property (readonly) NSString * longDefinition;                       //@synthesize longDefinition=_longDefinition - In the implementation block
@property (nonatomic,retain) MAAsset * rawAsset;                      //@synthesize rawAsset=_rawAsset - In the implementation block
-(id)description;
-(NSAttributedString *)definition;
-(NSString *)term;
-(NSString *)longDefinition;
-(MAAsset *)rawAsset;
-(NSString *)localizedDictionaryName;
-(id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4 ;
-(void)setRawAsset:(MAAsset *)arg1 ;
@end

