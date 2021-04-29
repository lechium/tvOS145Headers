/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplayConfiguration, NSDate, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplayConfiguration* _displayConfiguration;
	long long _interfaceOrientation;
	long long _backlightLevel;
	NSDate* _timestamp;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long displayBacklightLevel;                             //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSArray *)elements;
-(NSDate *)timestamp;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)display;
-(CGRect)bounds;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(CGRect)referenceBounds;
-(id)_initWithElements:(id)arg1 ;
-(long long)displayBacklightLevel;
-(void)_sortElements;
-(id)addElement:(id)arg1 ;
-(void)removeElement:(id)arg1 ;
-(void)finalizeLayout;
-(long long)displayType;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
@end

