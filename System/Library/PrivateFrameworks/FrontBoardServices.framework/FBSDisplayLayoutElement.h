/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSDisplayLayoutElement.h>
@class NSString;


@protocol FBSDisplayLayoutElement <FBSUIApplicationLayoutElement>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) long long level; 
@required
-(NSString *)identifier;
-(long long)level;
-(CGRect)frame;
-(CGRect)referenceFrame;

@end


@class NSString, BSMutableSettings;

@interface FBSDisplayLayoutElement : NSObject <SBSDisplayLayoutElement, NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement> {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	CGRect _frame;
	CGRect _referenceFrame;
	long long _level;
	BOOL _fillsDisplayBounds;
	BOOL _application;
	BOOL _keyboardFocus;
	BSMutableSettings* _otherSettings;

}

@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                                                //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long level;                                                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL fillsDisplayBounds;                                              //@synthesize fillsDisplayBounds=_fillsDisplayBounds - In the implementation block
@property (assign,getter=isUIApplicationElement,nonatomic) BOOL UIApplicationElement;              //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardFocus;                                                //@synthesize keyboardFocus=_keyboardFocus - In the implementation block
@property (nonatomic,copy,readonly) BSMutableSettings * otherSettings;                             //@synthesize otherSettings=_otherSettings - In the implementation block
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)level;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BSMutableSettings *)otherSettings;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isUIApplicationElement;
-(BOOL)hasKeyboardFocus;
-(BOOL)fillsDisplayBounds;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(void)setFillsDisplayBounds:(BOOL)arg1 ;
-(void)setUIApplicationElement:(BOOL)arg1 ;
-(void)setHasKeyboardFocus:(BOOL)arg1 ;
-(void)setOtherSettings:(BSMutableSettings *)arg1 ;
@end

