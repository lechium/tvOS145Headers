#import <SiriPlaybackControlIntents/ShuffleStateResolutionResult.h>
#import <SiriPlaybackControlIntents/Device.h>
#import <SiriPlaybackControlIntents/DeviceResolutionResult.h>
#import <SiriPlaybackControlIntents/SkipContentIntent.h>
#import <SiriPlaybackControlIntents/SkipContentIntentResponse.h>
#import <SiriPlaybackControlIntents/ResumeMediaIntent.h>
#import <SiriPlaybackControlIntents/ResumeMediaIntentResponse.h>
#import <SiriPlaybackControlIntents/DeviceQuery.h>
#import <SiriPlaybackControlIntents/DeviceQueryResolutionResult.h>
#import <SiriPlaybackControlIntents/LanguageOption.h>
#import <SiriPlaybackControlIntents/LanguageOptionResolutionResult.h>
#import <SiriPlaybackControlIntents/SubtitleStateResolutionResult.h>
#import <SiriPlaybackControlIntents/SetShuffleStateIntent.h>
#import <SiriPlaybackControlIntents/SetShuffleStateIntentResponse.h>
#import <SiriPlaybackControlIntents/SetSubtitleStateIntent.h>
#import <SiriPlaybackControlIntents/SetSubtitleStateIntentResponse.h>
#import <SiriPlaybackControlIntents/SetSubtitleStateDeviceResolutionResult.h>
#import <SiriPlaybackControlIntents/SetSubtitleStateLanguageResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeLevel.h>
#import <SiriPlaybackControlIntents/VolumeLevelResolutionResult.h>
#import <SiriPlaybackControlIntents/DeviceProximityResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeSettingTypeResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeSettingStateResolutionResult.h>
#import <SiriPlaybackControlIntents/SetAudioLanguageIntent.h>
#import <SiriPlaybackControlIntents/SetAudioLanguageIntentResponse.h>
#import <SiriPlaybackControlIntents/SetAudioLanguageDeviceResolutionResult.h>
#import <SiriPlaybackControlIntents/SetAudioLanguageLanguageResolutionResult.h>
#import <SiriPlaybackControlIntents/DeviceGroup.h>
#import <SiriPlaybackControlIntents/DeviceGroupResolutionResult.h>
#import <SiriPlaybackControlIntents/SeekTimeIntent.h>
#import <SiriPlaybackControlIntents/SeekTimeIntentResponse.h>
#import <SiriPlaybackControlIntents/SeekTimePlayheadPositionResolutionResult.h>
#import <SiriPlaybackControlIntents/NLMediaTypeResolutionResult.h>
#import <SiriPlaybackControlIntents/GetVolumeLevelIntent.h>
#import <SiriPlaybackControlIntents/GetVolumeLevelIntentResponse.h>
#import <SiriPlaybackControlIntents/GetVolumeLevelDeviceResolutionResult.h>
#import <SiriPlaybackControlIntents/SetRepeatStateIntent.h>
#import <SiriPlaybackControlIntents/SetRepeatStateIntentResponse.h>
#import <SiriPlaybackControlIntents/GroupTypeResolutionResult.h>
#import <SiriPlaybackControlIntents/NowPlayingMediaTypeResolutionResult.h>
#import <SiriPlaybackControlIntents/SignedDuration.h>
#import <SiriPlaybackControlIntents/SignedDurationResolutionResult.h>
#import <SiriPlaybackControlIntents/DeviceContext.h>
#import <SiriPlaybackControlIntents/DeviceContextResolutionResult.h>
#import <SiriPlaybackControlIntents/WhatDidTheySayIntent.h>
#import <SiriPlaybackControlIntents/WhatDidTheySayIntentResponse.h>
#import <SiriPlaybackControlIntents/WhatDidTheySayDeviceResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeSettingQualifierResolutionResult.h>
#import <SiriPlaybackControlIntents/NowPlayingStateResolutionResult.h>
#import <SiriPlaybackControlIntents/PauseMediaIntent.h>
#import <SiriPlaybackControlIntents/PauseMediaIntentResponse.h>
#import <SiriPlaybackControlIntents/RepeatStateResolutionResult.h>
#import <SiriPlaybackControlIntents/AddSpeakerIntent.h>
#import <SiriPlaybackControlIntents/AddSpeakerIntentResponse.h>
#import <SiriPlaybackControlIntents/AddSpeakerSourceResolutionResult.h>
#import <SiriPlaybackControlIntents/AddSpeakerDestinationsResolutionResult.h>
#import <SiriPlaybackControlIntents/SkipTimeIntent.h>
#import <SiriPlaybackControlIntents/SkipTimeIntentResponse.h>
#import <SiriPlaybackControlIntents/DirectionResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeSettingAttributeResolutionResult.h>
#import <SiriPlaybackControlIntents/SubtitleTypeResolutionResult.h>
#import <SiriPlaybackControlIntents/VolumeSettingUnitResolutionResult.h>
#import <SiriPlaybackControlIntents/SetVolumeLevelIntent.h>
#import <SiriPlaybackControlIntents/SetVolumeLevelIntentResponse.h>
#import <SiriPlaybackControlIntents/SetVolumeLevelDevicesResolutionResult.h>
#import <SiriPlaybackControlIntents/SetVolumeLevelVolumeLevelResolutionResult.h>
#import <SiriPlaybackControlIntents/MediaStream.h>
#import <SiriPlaybackControlIntents/MediaStreamResolutionResult.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipTimeFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ResumeMediaDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.DeviceSelectingUtil.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.PauseMediaHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.PauseMediaDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetVolumeLevelIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AnalyticsServiceImpl.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.VolumeLevelNeedsValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipContentIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetRepeatStateIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ResumeMediaFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetVolumeLevelHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.VolumeLevelNeedsConfirmationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipTimeDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetVolumeLevelUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipTimeIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AddSpeakerIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AddSpeakerHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.GetVolumeLevelFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipContentDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ResumeMediaHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ResumeMediaConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.BaseDialogProvider.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ResumeMediaIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetRepeatStateConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.GetVolumeLevelIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.PauseMediaFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetShuffleStateIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.GetVolumeLevelUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetRepeatStateDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipTimeHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetShuffleStateFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AceServiceHelper.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AudioSessionProvider.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipTimeConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetVolumeLevelFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.GetVolumeLevelHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipContentFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AddSpeakerFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.PauseMediaConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.AddSpeakerUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetShuffleStateHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetSubtitleStateConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetShuffleStateDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetRepeatStateHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayUnsupportedValueStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.GroupingUtil.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetRepeatStateFlowStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.WhatDidTheySayConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.DialogProvider.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetShuffleStateConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipContentConfirmIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.ContextUtil.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SetAudioLanguageDeviceDisambiguationStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SkipContentHandleIntentStrategy.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.LocUtil.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.PauseMediaIntentHandler.h>
#import <SiriPlaybackControlIntents/SiriPlaybackControlIntents.SeekTimeIntentHandler.h>
