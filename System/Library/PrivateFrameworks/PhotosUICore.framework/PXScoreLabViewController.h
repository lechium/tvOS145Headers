/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/_PXScoreLabGraphViewDelegate.h>

@class UIPickerView, UITextField, _PXScoreLabGraphView, PXRoundProgressView, NSArray, NSDictionary, NSString;

@interface PXScoreLabViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate> {

	UIPickerView* _xScorePickerView;
	UITextField* _xScoreSceneNameField;
	UIPickerView* _graphTypePickerView;
	UIPickerView* _yScorePickerView;
	UITextField* _yScoreSceneNameField;
	UIPickerView* _assetFilterPickerView;
	_PXScoreLabGraphView* _graphView;
	PXRoundProgressView* _progressView;
	NSArray* _scoreNames;
	NSDictionary* _keyPathByScoreName;
	NSDictionary* _timestampKeyPathByPrefix;
	NSArray* _assetFilterNames;
	NSDictionary* _assetPredicateByFilterName;
	NSDictionary* _taxonomy;
	NSDictionary* _sceneIdentifierBySceneName;
	BOOL _redrawIsDisabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewDidLoad;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)scoreLabGraphView:(id)arg1 reloadProgressed:(double)arg2 ;
-(void)scoreLabGraphViewDidFinishReloading:(id)arg1 ;
-(void)redrawGraph;
-(/*^block*/id)valueGetterForScoreKeyPath:(id)arg1 ;
-(/*^block*/id)valueGetterForSceneIdentifier:(unsigned)arg1 ;
-(unsigned)identifierForSceneName:(id)arg1 ;
-(void)sceneNameChanged:(id)arg1 ;
@end

