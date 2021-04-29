/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFDynamicEnumerationDataSource <NSObject>
@optional
-(id)possibleStatesForEnumeration:(id)arg1;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)enumerationAllowsMultipleValues:(id)arg1;
-(BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1;
-(id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;

@required
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;

@end

