/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {

	NSArray* _possibleStates;
	NSOrderedSet* _supportedAppIdentifiers;

}

@property (nonatomic,readonly) NSOrderedSet * supportedAppIdentifiers;              //@synthesize supportedAppIdentifiers=_supportedAppIdentifiers - In the implementation block
-(void)dealloc;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(void)wasRemovedFromWorkflow;
-(id)possibleStatesForLocalization;
-(void)refreshInstalledApps;
-(void)addObservers;
-(void)removeObservers;
-(NSOrderedSet *)supportedAppIdentifiers;
@end
