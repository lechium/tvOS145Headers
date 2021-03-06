/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAConditionallyMutatingClientBoundCommand.h>

@class NSString, SASendCommands, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>

@property (nonatomic,copy) NSString * dialogPhase; 
@property (nonatomic,copy) NSString * displayTarget; 
@property (assign,nonatomic) BOOL immersiveExperience; 
@property (assign,nonatomic) BOOL mutatingCommand; 
@property (nonatomic,retain) SASendCommands * refreshCommand; 
@property (assign,nonatomic) BOOL requiresResponse; 
@property (assign,nonatomic) BOOL scrollToTop; 
@property (assign,nonatomic) BOOL supplemental; 
@property (assign,nonatomic) BOOL temporary; 
@property (nonatomic,copy) NSArray * views; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addViews;
+(id)addViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)temporary;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(NSString *)displayTarget;
-(void)setDisplayTarget:(NSString *)arg1 ;
-(BOOL)immersiveExperience;
-(void)setImmersiveExperience:(BOOL)arg1 ;
-(SASendCommands *)refreshCommand;
-(void)setRefreshCommand:(SASendCommands *)arg1 ;
-(void)setRequiresResponse:(BOOL)arg1 ;
-(BOOL)scrollToTop;
-(void)setScrollToTop:(BOOL)arg1 ;
-(BOOL)supplemental;
-(void)setSupplemental:(BOOL)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(NSArray *)views;
-(void)setViews:(NSArray *)arg1 ;
@end

