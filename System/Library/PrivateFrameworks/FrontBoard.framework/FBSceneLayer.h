/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSSceneIdentityToken;

@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying> {

	long long _type;
	double _level;
	long long _alignment;
	unsigned _contextID;
	NSString* _externalSceneID;
	FBSSceneIdentityToken* _proxiedKeyboardOwner;
	unsigned _sceneID;

}

@property (assign,nonatomic) unsigned sceneID;                                                 //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) double level;                                                     //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long alignment;                                              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * externalSceneID;                                         //@synthesize externalSceneID=_externalSceneID - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardLayer; 
@property (nonatomic,readonly) BOOL isKeyboardProxyLayer; 
@property (nonatomic,readonly) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                                             //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneIdentityToken * proxiedKeyboardOwner;              //@synthesize proxiedKeyboardOwner=_proxiedKeyboardOwner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithFBSSceneLayer:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)type;
-(double)level;
-(unsigned)contextID;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setLevel:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned)sceneID;
-(void)setSceneID:(unsigned)arg1 ;
-(BOOL)isKeyboardProxyLayer;
-(BOOL)isKeyboardLayer;
-(id)initWithContextID:(unsigned)arg1 ;
-(NSString *)externalSceneID;
-(FBSSceneIdentityToken *)proxiedKeyboardOwner;
-(id)initWithExternalSceneID:(id)arg1 ;
-(id)initAsKeyboard;
-(id)initAsKeyboardProxyWithOwner:(id)arg1 ;
-(void)setExternalSceneID:(NSString *)arg1 ;
@end

