/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneSpecification, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {

	BOOL _keyboardScene;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneClientSettings* _initialClientSettings;

}

@property (assign,getter=isKeyboardScene,nonatomic) BOOL keyboardScene;                 //@synthesize keyboardScene=_keyboardScene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                       //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * initialClientSettings;              //@synthesize initialClientSettings=_initialClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(FBSSceneClientSettings *)initialClientSettings;
-(void)setInitialClientSettings:(FBSSceneClientSettings *)arg1 ;
-(BOOL)isKeyboardScene;
-(void)setKeyboardScene:(BOOL)arg1 ;
@end

