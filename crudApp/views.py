from django.shortcuts import render
from django.http import HttpResponse, HttpResponseRedirect
from .models import Student
from .forms import StudentForm


# Create your views here.


def insert(request):
    form = StudentForm(request.POST or None)
    if form.is_valid():
        form.save()
        return HttpResponseRedirect('/show')
    return render(request, 'insert.html', {'form': form})


def show(request):
    stu = Student.objects.all()
    return render(request, 'show.html', {'stu': stu})


def delete(request):
    pass


def update(request, id):
    stu = Student.objects.get(id=id)
    form = StudentForm(request.POST, instance=stu)
    if (form.is_valid()):
        form.save()
        return HttpResponseRedirect('/show')
    return render(request, 'update.html', {'student': stu, 'form': form})


def delete(request, id):
    stu = Student.objects.get(id=id)
    stu.delete()
    return HttpResponseRedirect('/show')
