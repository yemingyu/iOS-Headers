/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker-Protocol.h"

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    int _selectorChoice;
}

- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)setupPickerTable;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)setupDevices;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (void)setupHeaderAndFooter;
- (void)viewDidLoad;
- (void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2;
- (BOOL)canBeExtendedWithDWDS;

@end

